// /Script/Icarus.HuntingClueSetup
// size 0x90, declared in Icarus/Source/Icarus/DataStructs/HuntingClueSetup.h

USTRUCT()
struct FHuntingClueSetup : public FIcarusTableRowBase
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EHuntingClueType ClueType;  // 0x0018, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ClueLifespan;  // 0x001C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxClueDistance;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinDistanceBetweenClues;  // 0x0024, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistanceBetweenClues;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinTimeBetweenClues;  // 0x002C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxTimeBetweenClues;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<AHuntingClue> HuntingClue;  // 0x0038, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftClassPtr<UHuntingWidget> HuntingWidget;  // 0x0060, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HasTrail;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float TrailSegmentLength;  // 0x008C, size 0x4
};
