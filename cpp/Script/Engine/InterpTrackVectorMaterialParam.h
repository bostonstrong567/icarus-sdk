// /Script/Engine.InterpTrackVectorMaterialParam
// Derives from: UInterpTrackVectorBase > UInterpTrack > UObject
// size 0xA8, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpTrackVectorMaterialParam.h

UCLASS(MinimalAPI)
class UInterpTrackVectorMaterialParam : public UInterpTrackVectorBase
{
public:
    UPROPERTY(EditAnywhere) TArray<UMaterialInterface*> TargetMaterials;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) FName ParamName;  // 0x00A0, size 0x8
};
