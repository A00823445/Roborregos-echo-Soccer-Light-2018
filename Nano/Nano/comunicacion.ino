void mandar(){
  if(anterior != seccion){
    Serial.println(seccion);
    Serial.write(seccion);
  }
}
