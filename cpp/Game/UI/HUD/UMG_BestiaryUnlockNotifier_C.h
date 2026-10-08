// /Game/UI/HUD/UMG_BestiaryUnlockNotifier.UMG_BestiaryUnlockNotifier_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x278, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BestiaryUnlockNotifier_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Events;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* Scroll;  // 0x0270, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BestiaryUnlockNotifier(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnBestiaryUnlock(FBestiaryDataRowHandle Group, EBestiaryUnlockPopup PopType);  // parameters 0x19
    UFUNCTION(BlueprintCallable) void OnFishUnlock(FFishTypeTracking Tracking, int32 PopType);  // parameters 0x2C
};
