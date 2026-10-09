// /Script/Engine.DemoNetDriver
// Derives from: UNetDriver > UObject
// size 0x12D8, declared in Engine/Source/Runtime/Engine/Classes/Engine/DemoNetDriver.h

UCLASS(Transient, Config=Engine)
class UDemoNetDriver : public UNetDriver
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    int32 DemoFrameNum;  // 0x0760, not reflected
    float DemoTotalTime;  // 0x0764, not reflected
    float DemoCurrentTime;  // 0x0768, not reflected
    float OldDemoCurrentTime;  // 0x076C, not reflected
    int32 DemoTotalFrames;  // 0x0770, not reflected
    bool bChannelsArePaused;  // 0x0774, not reflected
    int32 CurrentLevelIndex;  // 0x0778, not reflected
    APlayerController * SpectatorController;  // 0x0780, not reflected
    TSharedPtr<INetworkReplayStreamer,0> ReplayStreamer;  // 0x0788, not reflected
    double AccumulatedRecordTime;  // 0x0798, not reflected
    double LastRecordAvgFlush;  // 0x07A0, not reflected
    double MaxRecordTime;  // 0x07A8, not reflected
    int32 RecordCountSinceFlush;  // 0x07B0, not reflected
    TSet<FString,DefaultKeyFuncs<FString,0>,FDefaultSetAllocator> DeletedNetStartupActors;  // 0x07B8, not reflected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> DeletedNetStartupActorGUIDs;  // 0x0808, not reflected
    UPROPERTY(Transient) TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors;  // 0x0858, size 0x50
    double LastCheckpointTime;  // 0x08A8, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnGotoTimeDelegate;  // 0x08D0, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnDemoFinishPlaybackDelegate;  // 0x08E8, not reflected
    TMulticastDelegate<void __cdecl(void),FDefaultDelegateUserPolicy> OnDemoFinishRecordingDelegate;  // 0x0900, not reflected
    TMulticastDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnPauseChannelsDelegate;  // 0x0918, not reflected
    TMap<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32> >,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FNetworkGUID,TIndirectArray<FReplayExternalData,TSizedDefaultAllocator<32> >,0> > ExternalDataToObjectMap;  // 0x0930, not reflected
    TArray<FPlaybackPacket,TSizedDefaultAllocator<32> > PlaybackPackets;  // 0x0980, not reflected
    bool bRecordMapChanges;  // 0x0990, not reflected
    UPROPERTY() bool bIsLocalReplay;  // 0x0A38, size 0x1
protected:
    TArray<FQueuedDemoPacket,TSizedDefaultAllocator<32> > QueuedPacketsBeforeTravel;  // 0x0AB8, not reflected
    bool bIsWaitingForHeaderDownload;  // 0x0AC8, not reflected
    bool bIsWaitingForStream;  // 0x0AC9, not reflected
    int64 MaxArchiveReadPos;  // 0x0AD0, not reflected
private:
    TArray<TUniquePtr<FDeltaCheckpointData,TDefaultDelete<FDeltaCheckpointData> >,TSizedDefaultAllocator<32> > PlaybackDeltaCheckpointData;  // 0x08B0, not reflected
    TSharedPtr<FReplayPlaylistTracker,0> PlaylistTracker;  // 0x08C0, not reflected
    bool bIsFastForwarding;  // 0x0991, not reflected
    bool bIsFastForwardingForCheckpoint;  // 0x0992, not reflected
    bool bWasStartStreamingSuccessful;  // 0x0993, not reflected
    bool bIsFinalizingFastForward;  // 0x0994, not reflected
    TArray<FNetworkGUID,TSizedDefaultAllocator<32> > NonQueuedGUIDsForScrubbing;  // 0x0998, not reflected
    TArray<TSharedRef<FQueuedReplayTask,0>,TSizedDefaultAllocator<32> > QueuedReplayTasks;  // 0x09A8, not reflected
    TSharedPtr<FQueuedReplayTask,0> ActiveReplayTask;  // 0x09B8, not reflected
    TSharedPtr<FQueuedReplayTask,0> ActiveScrubReplayTask;  // 0x09C8, not reflected
    TDelegate<void __cdecl(bool),FDefaultDelegateUserPolicy> OnGotoTimeDelegate_Transient;  // 0x09D8, not reflected
    float SavedReplicatedWorldTimeSeconds;  // 0x09E8, not reflected
    float SavedSecondsToSkip;  // 0x09EC, not reflected
    FString DemoSessionID;  // 0x09F0, not reflected
    float MaxDesiredRecordTimeMS;  // 0x0A00, not reflected
    UPROPERTY(Config) float CheckpointSaveMaxMSPerFrame;  // 0x0A04, size 0x4
    TWeakObjectPtr<APlayerController,FWeakObjectPtr> ViewerOverride;  // 0x0A08, not reflected
    TArray<UDemoNetDriver::FDemoActorPriority,TSizedDefaultAllocator<32> > PrioritizedActors;  // 0x0A10, not reflected
    bool bPrioritizeActors;  // 0x0A20, not reflected
    UPROPERTY(Config) TArray<FMulticastRecordOptions> MulticastRecordOptions;  // 0x0A28, size 0x10
    UPROPERTY(Transient) TArray<APlayerController*> SpectatorControllers;  // 0x0A40, size 0x10
    TArray<UDemoNetDriver::FLevelnterval,TSizedDefaultAllocator<32> > LevelIntervals;  // 0x0A50, not reflected
    TSet<FNetworkGUID,DefaultKeyFuncs<FNetworkGUID,0>,FDefaultSetAllocator> TrackedRewindActorsByGUID;  // 0x0A60, not reflected
    float LastProcessedPacketTime;  // 0x0AB0, not reflected
    int32 PlaybackPacketIndex;  // 0x0AB4, not reflected
    float RecordBuildConsiderAndPrioritizeTimeSlice;  // 0x0AD8, not reflected
    TUniquePtr<FDemoBudgetLogHelper,TDefaultDelete<FDemoBudgetLogHelper> > BudgetLogHelper;  // 0x0AE0, not reflected
    TAtomic<float> LastReplayFrameFidelity;  // 0x0AE8, not reflected
    FReplayHelper ReplayHelper;  // 0x0AF0, not reflected

    // Virtual functions that start here:
    //   QueueNetStartupActorForRollbackViaDeletion, ShouldSaveCheckpoint
};
