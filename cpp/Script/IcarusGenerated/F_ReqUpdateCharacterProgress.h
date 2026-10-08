// /Script/IcarusGenerated.ReqUpdateCharacterProgress
// size 0x38, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqUpdateCharacterProgress.h

USTRUCT()
struct FReqUpdateCharacterProgress
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 XP;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 XP_Debt;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x0030, size 0x1
};
