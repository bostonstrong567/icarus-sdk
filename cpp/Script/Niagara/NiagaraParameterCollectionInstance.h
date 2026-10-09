// /Script/Niagara.NiagaraParameterCollectionInstance
// Derives from: UObject
// size 0xE0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Classes/NiagaraParameterCollection.h

UCLASS()
class UNiagaraParameterCollectionInstance : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) UNiagaraParameterCollection* Collection;  // 0x0028, size 0x8
    UPROPERTY() TArray<FNiagaraVariable> OverridenParameters;  // 0x0030, size 0x10
private:
    UPROPERTY() FNiagaraParameterStore ParameterStorage;  // 0x0040, size 0x78
    FWindowsRWLock DirtyParameterLock;  // 0x00B8, not reflected
    TArray<TTuple<FName,float>,TSizedDefaultAllocator<32> > DirtyScalarParameters;  // 0x00C0, not reflected
    TArray<TTuple<FName,FLinearColor>,TSizedDefaultAllocator<32> > DirtyVectorParameters;  // 0x00D0, not reflected
public:
    UFUNCTION(BlueprintCallable) bool GetBoolParameter(FString InVariableName);  // parameters 0x11
    UFUNCTION(BlueprintCallable) FLinearColor GetColorParameter(FString InVariableName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) float GetFloatParameter(FString InVariableName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) int32 GetIntParameter(FString InVariableName);  // parameters 0x14
    UFUNCTION(BlueprintCallable) FQuat GetQuatParameter(FString InVariableName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) FVector2D GetVector2DParameter(FString InVariableName);  // parameters 0x18
    UFUNCTION(BlueprintCallable) FVector4 GetVector4Parameter(FString InVariableName);  // parameters 0x20
    UFUNCTION(BlueprintCallable) FVector GetVectorParameter(FString InVariableName);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void SetBoolParameter(FString InVariableName, bool InValue);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void SetColorParameter(FString InVariableName, FLinearColor InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetFloatParameter(FString InVariableName, float InValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetIntParameter(FString InVariableName, int32 InValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable) void SetQuatParameter(FString InVariableName, const FQuat& InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetVector2DParameter(FString InVariableName, FVector2D InValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetVector4Parameter(FString InVariableName, const FVector4& InValue);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void SetVectorParameter(FString InVariableName, FVector InValue);  // parameters 0x1C
};
