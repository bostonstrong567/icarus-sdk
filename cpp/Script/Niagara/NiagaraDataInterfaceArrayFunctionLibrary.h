// /Script/Niagara.NiagaraDataInterfaceArrayFunctionLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraDataInterfaceArrayFunctionLibrary.h

UCLASS()
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static TArray<bool> GetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static bool GetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x15
    UFUNCTION(BlueprintCallable) static TArray<FLinearColor> GetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FLinearColor GetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x24
    UFUNCTION(BlueprintCallable) static TArray<float> GetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static float GetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<int32> GetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static int32 GetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static TArray<FQuat> GetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FQuat GetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static TArray<FVector> GetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static TArray<FVector2D> GetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FVector2D GetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static TArray<FVector4> GetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static FVector4 GetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static FVector GetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayBool(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<bool>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayBoolValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const bool& Value, bool bSizeToFit);  // parameters 0x16
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayColor(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FLinearColor>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayColorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FLinearColor& Value, bool bSizeToFit);  // parameters 0x25
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayFloat(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<float>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayFloatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, float Value, bool bSizeToFit);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayInt32(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<int32>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayInt32Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);  // parameters 0x19
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayQuat(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FQuat>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayQuatValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FQuat& Value, bool bSizeToFit);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayVector(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayVector2D(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector2D>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayVector2DValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector2D& Value, bool bSizeToFit);  // parameters 0x1D
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayVector4(UNiagaraComponent* NiagaraSystem, FName OverrideName, const TArray<FVector4>& ArrayData);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayVector4Value(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector4& Value, bool bSizeToFit);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void SetNiagaraArrayVectorValue(UNiagaraComponent* NiagaraSystem, FName OverrideName, int32 Index, const FVector& Value, bool bSizeToFit);  // parameters 0x21
};
