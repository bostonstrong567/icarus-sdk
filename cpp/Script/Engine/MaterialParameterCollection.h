// /Script/Engine.MaterialParameterCollection
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialParameterCollection.h

UCLASS(MinimalAPI)
class UMaterialParameterCollection : public UObject
{
public:
    UPROPERTY() FGuid StateId;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere) TArray<FCollectionScalarParameter> ScalarParameters;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) TArray<FCollectionVectorParameter> VectorParameters;  // 0x0048, size 0x10
private:
    FThreadSafeBool ReleasedByRT;  // 0x0058, not reflected
    FMaterialParameterCollectionInstanceResource * DefaultResource;  // 0x0060, not reflected
    TUniquePtr<FShaderParametersMetadata,TDefaultDelete<FShaderParametersMetadata> > UniformBufferStruct;  // 0x0068, not reflected
};
