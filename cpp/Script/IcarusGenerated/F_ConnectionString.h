// /Script/IcarusGenerated.ConnectionString
// size 0x38, declared in Icarus/Source/IcarusGenerated/Public/Struct/ConnectionString.h

USTRUCT()
struct FConnectionString
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ExternalIP;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString InternalIP;  // 0x0010, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString P2PAddress;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Port;  // 0x0030, size 0x4
};
