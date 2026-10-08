// /Game/UI/Notifications/UMG_OnProspectNotification_MissionComplete.UMG_OnProspectNotification_MissionComplete_C
// Derives from: UUMG_OnProspectNotificationBase_C > UUserWidget > UWidget > UVisual > UObject
// size 0x2A8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OnProspectNotification_MissionComplete_C : public UUMG_OnProspectNotificationBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* MissionNameBorder;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* MissionNameText;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* NotificationTitle;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* RewardBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* RewardsBox;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* RewardsText;  // 0x02A0, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_OnProspectNotification_MissionComplete(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetMissionDropName(const FFactionMissionsRowHandle& MissionRowHandle, FText& MissionDropName);  // parameters 0x30
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetMissionReward(FFactionMissionsRowHandle Mission, bool IsCurrentMission, TArray<FMetaResource>& ResourcesReceived);  // parameters 0x30
};
