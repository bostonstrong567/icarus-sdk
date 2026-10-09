// /Script/IcarusGenerated.AssociatedMemberInfo
// size 0x40, declared in Icarus/Source/IcarusGenerated/Public/Struct/AssociatedMemberInfo.h

USTRUCT()
struct FAssociatedMemberInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString AccountName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CharacterName;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Experience;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProspectLocation Status;  // 0x0038, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Settled;  // 0x0039, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsCurrentlyPlaying;  // 0x003A, size 0x1
};
