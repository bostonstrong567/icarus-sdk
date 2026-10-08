// /Game/UI/Windows/UMG_SettledProspectTracker.UMG_SettledProspectTracker_C
// Derives from: UIcarusWidget > UUserWidget > UWidget > UVisual > UObject
// size 0x2B3, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SettledProspectTracker_C : public UIcarusWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* CurrentProspects;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Title;  // 0x02A8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x02B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Update;  // 0x02B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Found;  // 0x02B2, size 0x1

    UFUNCTION() void ExecuteUbergraph_UMG_SettledProspectTracker(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnNotificationsUpdated();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
    UFUNCTION(BlueprintCallable) void UpdateNotifications();
};
