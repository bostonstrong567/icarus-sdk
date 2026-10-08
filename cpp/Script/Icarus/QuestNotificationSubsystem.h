// /Script/Icarus.QuestNotificationSubsystem
// Derives from: UWorldSubsystem > USubsystem > UObject
// size 0xA0, declared in Icarus/Source/Icarus/IcarusGenerated/Subsystems/QuestNotificationSubsystem.h

UCLASS()
class UQuestNotificationSubsystem : public UWorldSubsystem
{
public:
    UPROPERTY(BlueprintAssignable) FQuestStartedNotifySignature OnQuestStartedNotify;  // 0x0030, size 0x10
    UPROPERTY(BlueprintAssignable) FQuestEndedNotifySignature OnQuestEndedNotify;  // 0x0040, size 0x10
    UPROPERTY(BlueprintAssignable) FMissionStartedNotifySignature OnMissionStartedNotify;  // 0x0050, size 0x10
    UPROPERTY(BlueprintAssignable) FMissionCompletedNotifySignature OnMissionCompletedNotify;  // 0x0060, size 0x10
    UPROPERTY(BlueprintAssignable) FMissionFailedNotifySignature OnMissionFailedNotify;  // 0x0070, size 0x10
    UPROPERTY(BlueprintAssignable) FMissionAbandonedNotifySignature OnMissionAbandonedNotify;  // 0x0080, size 0x10
    UPROPERTY(BlueprintAssignable) FRequestResupplyNotifySignature OnRequestResupplyNotify;  // 0x0090, size 0x10

    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastMissionAbandonedDelegate(FFactionMissionsRowHandle Mission);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastMissionCompletedDelegate(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastMissionFailedDelegate(AQuest* Quest, FFactionMissionsRowHandle Mission);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastMissionStartedDelegate(FFactionMissionsRowHandle Mission);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastQuestEndedDelegate(AQuest* Quest);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastQuestStartedDelegate(AQuest* Quest);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly) void BroadcastRequestResupplyDelegate(AIcarusPlayerCharacter* Player);  // parameters 0x8
};
