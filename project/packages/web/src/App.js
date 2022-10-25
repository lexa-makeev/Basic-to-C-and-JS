import React, { useEffect, useState } from "react";
import { mains } from "@project/common";
function App() {
  const [valueInput, setValueInput] = useState("");
  const [value, setValue] = useState("");

  useEffect(() => {
    setValue("TICKERTAPE \nCREATIVE COMPUTING \nMORRISTOWN, NEW JERSEY \n");
  }, []);
  function main() {
    setValue(mains(valueInput));
  }

  return (
    <div className="App">
      <textarea name="" id="" cols="30" rows="10" value={value}></textarea>
      <input
        type="text"
        onChange={(e) => setValueInput(e.target.value)}
        value={valueInput}
      />
      <button onClick={main}>Начать</button>
    </div>
  );
}

export default App;
