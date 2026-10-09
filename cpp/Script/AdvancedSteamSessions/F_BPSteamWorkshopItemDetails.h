// /Script/AdvancedSteamSessions.BPSteamWorkshopItemDetails
// size 0x60, declared in Icarus/Plugins/AdvancedSteamSessions/Source/AdvancedSteamSessions/Classes/AdvancedSteamWorkshopLibrary.h

USTRUCT()
struct FBPSteamWorkshopItemDetails
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBPSteamResult ResultOfRequest;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FBPWorkshopFileType FileType;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 CreatorAppID;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 ConsumerAppID;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Title;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString Description;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString ItemUrl;  // 0x0030, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 VotesUp;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 VotesDown;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float CalculatedScore;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bBanned;  // 0x004C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAcceptedForUse;  // 0x004D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bTagsTruncated;  // 0x004E, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FString CreatorSteamID;  // 0x0050, size 0x10
};
