// /Script/IcarusGenerated.ResClaimNotificationAttachments
// size 0x48, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResClaimNotificationAttachments.h

USTRUCT()
struct FResClaimNotificationAttachments
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FInventoryDelta InventoryDelta;  // 0x0008, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FMetaResource> MetaResourceDelta;  // 0x0020, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Credits;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NotificationUID;  // 0x0038, size 0x10
};
