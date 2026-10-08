// /Script/Engine.InterpData
// Derives from: UObject
// size 0x70, declared in Engine/Source/Runtime/Engine/Classes/Matinee/InterpData.h

UCLASS(MinimalAPI)
class UInterpData : public UObject
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float InterpLength;  // 0x0028, size 0x4
    UPROPERTY() float PathBuildTime;  // 0x002C, size 0x4
    UPROPERTY(BlueprintReadOnly) TArray<UInterpGroup*> InterpGroups;  // 0x0030, size 0x10
    UPROPERTY() UInterpCurveEdSetup* CurveEdSetup;  // 0x0040, size 0x8
    UPROPERTY() float EdSectionStart;  // 0x0048, size 0x4
    UPROPERTY() float EdSectionEnd;  // 0x004C, size 0x4
    UPROPERTY(EditAnywhere) uint8 bShouldBakeAndPrune : 1;  // 0x0050, mask 0x01
    UPROPERTY(Transient) UInterpGroupDirector* CachedDirectorGroup;  // 0x0058, size 0x8
    UPROPERTY() TArray<FName> AllEventNames;  // 0x0060, size 0x10
};
