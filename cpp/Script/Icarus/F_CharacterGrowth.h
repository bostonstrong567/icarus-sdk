// /Script/Icarus.CharacterGrowth
// size 0x48, declared in Icarus/Source/Icarus/Systems/CharacterGrowth/CharacterGrowth.h

USTRUCT()
struct FCharacterGrowth : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* ExperienceCurve;  // 0x0018, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* AttributeCurve;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* BlueprintPointsPerLevel;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* TalentPointsPerLevel;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UCurveFloat* SoloPointsPerLevel;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxDisplayLevel;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 MaxLevel;  // 0x0044, size 0x4
};
