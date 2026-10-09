// /Script/IcarusGenerated.ResGetNotifications
// size 0x18, declared in Icarus/Source/IcarusGenerated/Public/Struct/ResGetNotifications.h

USTRUCT()
struct FResGetNotifications
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Success;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool CompleteList;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FNotification> NotificationDelta;  // 0x0008, size 0x10
};
