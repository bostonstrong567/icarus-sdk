// /Game/UI/Notifications/UMG_OnProspectNotificationBase.UMG_OnProspectNotificationBase_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x270, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OnProspectNotificationBase_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle LifespanTimerHandle;  // 0x0268, size 0x8

    UFUNCTION(BlueprintCallable) void DestroyWidget();
    UFUNCTION() void ExecuteUbergraph_UMG_OnProspectNotificationBase(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PauseNotification();
    UFUNCTION(BlueprintCallable) void SetLifespan(float Lifespan);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void UnpauseNotification();
};
