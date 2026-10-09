// /Script/IcarusGenerated.OnlineProfileCharacter
// size 0xF0, declared in Icarus/Source/IcarusGenerated/Public/Struct/OnlineProfileCharacter.h

USTRUCT()
struct FOnlineProfileCharacter
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString CharacterName;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ChrSlot;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 XP;  // 0x0014, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 XP_Debt;  // 0x0018, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsDead;  // 0x001C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsAbandoned;  // 0x001D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LastProspectId;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProspectLocation Location;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<int32> UnlockedFlags;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaResources;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FCharacterCosmetics Cosmetic;  // 0x0058, size 0x80
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FBackendTalent> Talents;  // 0x00D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 TimeLastPlayed;  // 0x00E8, size 0x8
};
