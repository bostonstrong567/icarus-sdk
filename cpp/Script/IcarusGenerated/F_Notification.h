// /Script/IcarusGenerated.Notification
// size 0x78, declared in Icarus/Source/IcarusGenerated/Public/Struct/Notification.h

USTRUCT()
struct FNotification
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString NotificationUID;  // 0x0000, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ENotificationType Type;  // 0x0010, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Title;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Message;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ProspectID;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAttachment Attachments;  // 0x0048, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Read;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SentToPlayer;  // 0x0071, size 0x1
};
