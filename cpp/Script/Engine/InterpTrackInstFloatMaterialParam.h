// /Script/Engine.InterpTrackInstFloatMaterialParam
// Derives from: UInterpTrackInst > UObject
// size 0x60, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackInstFloatMaterialParam.h

UCLASS()
class UInterpTrackInstFloatMaterialParam : public UInterpTrackInst
{
public:
    UPROPERTY() TArray<UMaterialInstanceDynamic*> MaterialInstances;  // 0x0028, size 0x10
    UPROPERTY() TArray<float> ResetFloats;  // 0x0038, size 0x10
    UPROPERTY() TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs;  // 0x0048, size 0x10
    UPROPERTY() UInterpTrackFloatMaterialParam* InstancedTrack;  // 0x0058, size 0x8
};
