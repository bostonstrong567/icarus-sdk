// /Script/UMG.SafeZone
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x138, declared in Engine/Source/Runtime/UMG/Public/Components/SafeZone.h

UCLASS()
class USafeZone : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool PadLeft;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool PadRight;  // 0x0121, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool PadTop;  // 0x0122, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool PadBottom;  // 0x0123, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SSafeZone,0> MySafeZone;  // 0x0128, protected

    UFUNCTION(BlueprintCallable) void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom);  // parameters 0x4
};
