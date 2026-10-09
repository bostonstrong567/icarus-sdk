// /Script/Icarus.SplineActorBase
// Derives from: AActor > UObject
// size 0x230, declared in Icarus/Source/Icarus/Objects/SplineActorBase.h

UCLASS(Config=Engine)
class ASplineActorBase : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 UniqueSplineID;  // 0x0220, size 0x4
    int32 CollidedSplineID;  // 0x0224, not reflected
protected:
    UPROPERTY(Instanced) USplineRecorderComponent* Recorder;  // 0x0228, size 0x8
public:
    UFUNCTION(BlueprintImplementableEvent) void PostDatabaseSpawn(const FRecordedSplineActorStruct& FromDatabase);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void ReconnectFromDatabase(const FRecordedSplineActorStruct& FromDatabase, const TArray<AActor*>& RelevantActors);  // parameters 0x98
    UFUNCTION(BlueprintImplementableEvent) FRecordedSplineActorStruct RecordSplineState();  // parameters 0x88
    UFUNCTION(BlueprintCallable) void UpdateSplineBounds();
};
