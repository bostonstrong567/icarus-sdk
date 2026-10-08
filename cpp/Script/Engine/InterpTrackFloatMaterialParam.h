// /Script/Engine.InterpTrackFloatMaterialParam
// Derives from: UInterpTrackFloatBase > UInterpTrack > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackFloatMaterialParam.h

UCLASS(MinimalAPI)
class UInterpTrackFloatMaterialParam : public UInterpTrackFloatBase
{
public:
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> TargetMaterials;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) FName ParamName;  // 0x00A0, size 0x8
};
