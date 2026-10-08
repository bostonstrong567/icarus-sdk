// /Game/UI/Notifications/UMG_OnProspectNotification_ExoticsBanked.UMG_OnProspectNotification_ExoticsBanked_C
// Derives from: UUMG_OnProspectNotificationBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OnProspectNotification_ExoticsBanked_C : public UUMG_OnProspectNotificationBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RewardsBox;  // 0x0278, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_OnProspectNotification_ExoticsBanked(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetExoticsCount(int32 Amount, FMetaCurrencyRowHandle Currency);  // parameters 0x1C
};
