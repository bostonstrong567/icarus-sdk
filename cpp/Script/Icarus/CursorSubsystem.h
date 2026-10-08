// /Script/Icarus.CursorSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x240, declared in Icarus/Source/Icarus/Subsystems/GameInstance/CursorSubsystem.h

UCLASS()
class UCursorSubsystem : public UGameInstanceSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FCursorCleared CursorCleared;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FCursorUpdated CursorUpdated;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FItemData CurrentItem;  // 0x0050, size 0x1F0

    UFUNCTION(BlueprintCallable) void UpdateCursor(FItemData Item);  // parameters 0x1F0
};
