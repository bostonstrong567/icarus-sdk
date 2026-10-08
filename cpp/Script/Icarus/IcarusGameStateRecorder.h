// /Script/Icarus.IcarusGameStateRecorder
// Derives from: UObject
// size 0x140, declared in Icarus/Source/Icarus/IcarusGameStateRecorder.h

UCLASS()
class UIcarusGameStateRecorder : public UObject
{
public:
    UPROPERTY() TArray<UIcarusStateRecorderComponent*> RecorderComponents;  // 0x0028, size 0x10
    UPROPERTY() TMap<int32, int32> GUIDFastLookup;  // 0x0038, size 0x50
    UPROPERTY() TMap<FString, int32> ActorPathNameFastLookup;  // 0x0088, size 0x50
    UPROPERTY() TMap<FVector_NetQuantize, int32> ActorLocationFastLookup;  // 0x00D8, size 0x50

    // Not reflected: the engine's scripting cannot see these.
    bool bDeferBeginRecording;  // 0x0128, protected
    TArray<TWeakObjectPtr<UIcarusStateRecorderComponent,FWeakObjectPtr>,TSizedDefaultAllocator<32> > DeferredRecorders;  // 0x0130, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumRecorderComponents() const;  // parameters 0x4
};
