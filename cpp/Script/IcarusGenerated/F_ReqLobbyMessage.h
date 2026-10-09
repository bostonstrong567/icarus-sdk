// /Script/IcarusGenerated.ReqLobbyMessage
// size 0x40, declared in Icarus/Source/IcarusGenerated/Public/Struct/ReqLobbyMessage.h

USTRUCT()
struct FReqLobbyMessage
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString UserID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString AuthType;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Authtoken;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString AppId;  // 0x0030, size 0x10
};
