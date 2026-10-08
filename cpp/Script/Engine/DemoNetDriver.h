// /Script/Engine.DemoNetDriver
// Derives from: UNetDriver > UObject
// size 0x12D8, declared in Engine/Source/Runtime/Engine/Classes/Engine/DemoNetDriver.h

UCLASS(Transient, Config=Engine)
class UDemoNetDriver : public UNetDriver
{
public:
    UPROPERTY(Transient) TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors;  // 0x0858, size 0x50
    UPROPERTY(Config) float CheckpointSaveMaxMSPerFrame;  // 0x0A04, size 0x4
    UPROPERTY(Config) TArray<FMulticastRecordOptions> MulticastRecordOptions;  // 0x0A28, size 0x10
    UPROPERTY() bool bIsLocalReplay;  // 0x0A38, size 0x1
    UPROPERTY(Transient) TArray<APlayerController*> SpectatorControllers;  // 0x0A40, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    int32 DemoFrameNum;  // 0x0760
    float DemoTotalTime;  // 0x0764
    float DemoCurrentTime;  // 0x0768
    float OldDemoCurrentTime;  // 0x076C
    int32 DemoTotalFrames;  // 0x0770
    bool bChannelsArePaused;  // 0x0774
    int32 CurrentLevelIndex;  // 0x0778
    APlayerController * SpectatorController;  // 0x0780
    TSharedPtr<INetworkReplayStreamer,0> ReplayStreamer;  // 0x0788
    double AccumulatedRecordTime;  // 0x0798
    double LastRecordAvgFlush;  // 0x07A0
    double MaxRecordTime;  // 0x07A8
    int32 RecordCountSinceFlush;  // 0x07B0
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> DeletedNetStartupActors;  // 0x07B8
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> DeletedNetStartupActorGUIDs;  // 0x0808
    double LastCheckpointTime;  // 0x08A8
    TArray<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData> >,TSizedDefaultAllocator<32> > PlaybackDeltaCheckpointData;  // 0x08B0, private
    TSharedPtr<FReplayPlaylistTracker,0> PlaylistTracker;  // 0x08C0, private
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnGotoTimeDelegate;  // 0x08D0
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnDemoFinishPlaybackDelegate;  // 0x08E8
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnDemoFinishRecordingDelegate;  // 0x0900
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnPauseChannelsDelegate;  // 0x0918
    TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32> >,0> > ExternalDataToObjectMap;  // 0x0930
    TArray<FPlaybackPacket,TSizedDefaultAllocator<32> > PlaybackPackets;  // 0x0980
    bool bRecordMapChanges;  // 0x0990
    bool bIsFastForwarding;  // 0x0991, private
    bool bIsFastForwardingForCheckpoint;  // 0x0992, private
    bool bWasStartStreamingSuccessful;  // 0x0993, private
    bool bIsFinalizingFastForward;  // 0x0994, private
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > NonQueuedGUIDsForScrubbing;  // 0x0998, private
    TArray<TSharedRef<FQueuedReplayTask,0>,TSizedDefaultAllocator<32> > QueuedReplayTasks;  // 0x09A8, private
    TSharedPtr<FQueuedReplayTask,0> ActiveReplayTask;  // 0x09B8, private
    TSharedPtr<FQueuedReplayTask,0> ActiveScrubReplayTask;  // 0x09C8, private
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnGotoTimeDelegate_Transient;  // 0x09D8, private
    float SavedReplicatedWorldTimeSeconds;  // 0x09E8, private
    float SavedSecondsToSkip;  // 0x09EC, private
    FString DemoSessionID;  // 0x09F0, private
    float MaxDesiredRecordTimeMS;  // 0x0A00, private
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> ViewerOverride;  // 0x0A08, private
    TArray<UDemoNetDriver::FDemoActorPriority,TSizedDefaultAllocator<32> > PrioritizedActors;  // 0x0A10, private
    bool bPrioritizeActors;  // 0x0A20, private
    TArray<UDemoNetDriver::FLevelnterval,TSizedDefaultAllocator<32> > LevelIntervals;  // 0x0A50, private
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> TrackedRewindActorsByGUID;  // 0x0A60, private
    float LastProcessedPacketTime;  // 0x0AB0, private
    int32 PlaybackPacketIndex;  // 0x0AB4, private
    TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32> > QueuedPacketsBeforeTravel;  // 0x0AB8, protected
    bool bIsWaitingForHeaderDownload;  // 0x0AC8, protected
    bool bIsWaitingForStream;  // 0x0AC9, protected
    int64 MaxArchiveReadPos;  // 0x0AD0, protected
    float RecordBuildConsiderAndPrioritizeTimeSlice;  // 0x0AD8, private
    TUniquePtr<FDemoBudgetLogHelper,TDefaultDelete<FDemoBudgetLogHelper> > BudgetLogHelper;  // 0x0AE0, private
    TAtomic<float> LastReplayFrameFidelity;  // 0x0AE8, private
    FReplayHelper ReplayHelper;  // 0x0AF0, private

    // Virtual functions that start here:
    //   QueueNetStartupActorForRollbackViaDeletion, ShouldSaveCheckpoint
};
