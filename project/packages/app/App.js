import { StatusBar } from "expo-status-bar";
import React, { useEffect, useState } from "react";
import { Button, StyleSheet, Text, TextInput, View } from "react-native";
import { mains } from "@project/common";

export default function App() {
  const [valueInput, setValueInput] = useState("");
  const [value, setValue] = useState("");

  useEffect(() => {
    setValue("TICKERTAPE \nCREATIVE COMPUTING \nMORRISTOWN, NEW JERSEY \n");
  }, []);
  function main() {
    setValue(mains(valueInput));
  }

  return (
    <View style={styles.container}>
      <Text style={styles.titleText}>{value}</Text>
      <TextInput
        style={styles.input}
        onChangeText={setValueInput}
        value={valueInput}
        keyboardType="text"
      />
      <Button onPress={main} title="Начать" color="#841584" />
      <StatusBar style="auto" />
    </View>
  );
}

const styles = StyleSheet.create({
  container: {
    backgroundColor: "#fff",
    marginTop: 50,
  },
  input: {
    backgroundColor: "#ffd",
  },
});
