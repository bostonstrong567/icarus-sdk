// /Script/IcarusGenerated.ProspectInfo
// size 0xA0, declared in Icarus/Source/IcarusGenerated/Public/Struct/ProspectInfo.h

USTRUCT()
struct FProspectInfo
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ClaimedAccountID;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ClaimedAccountCharacter;  // 0x0020, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectDTKey;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString FactionMissionDTKey;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString LobbyName;  // 0x0048, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int64 ExpireTime;  // 0x0058, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EProspectState ProspectState;  // 0x0060, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAssociatedMemberInfo> AssociatedMembers;  // 0x0068, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Cost;  // 0x0078, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Reward;  // 0x007C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMissionDifficulty Difficulty;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Insurance;  // 0x0081, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool NoRespawns;  // 0x0082, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 ElapsedTime;  // 0x0084, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 SelectedDropPoint;  // 0x0088, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FCustomGameSetting> CustomSettings;  // 0x0090, size 0x10
};
