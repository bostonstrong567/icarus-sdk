// /Script/Icarus.SplineActorBase
// Derives from: AActor > UObject
// size 0x230, declared in Icarus/Source/Icarus/Objects/SplineActorBase.h

UCLASS(Config=Engine)
class ASplineActorBase : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 UniqueSplineID;  // 0x0220, size 0x4
    UPROPERTY(Instanced) USplineRecorderComponent* Recorder;  // 0x0228, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    int32 CollidedSplineID;  // 0x0224

    UFUNCTION(BlueprintImplementableEvent) void PostDatabaseSpawn(const FRecordedSplineActorStruct& FromDatabase);  // parameters 0x88
    UFUNCTION(BlueprintImplementableEvent) void ReconnectFromDatabase(const FRecordedSplineActorStruct& FromDatabase, const TArray<AActor*>& RelevantActors);  // parameters 0x98
    UFUNCTION(BlueprintImplementableEvent) FRecordedSplineActorStruct RecordSplineState();  // parameters 0x88
    UFUNCTION(BlueprintCallable) void UpdateSplineBounds();
};
