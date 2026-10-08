// /Script/Icarus.IcarusNavigationDirtier
// Derives from: UActorComponent > UObject
// size 0xF0, declared in Icarus/Source/Icarus/Navigation/IcarusNavigationDirtier.h

UCLASS(Config=Engine)
class UIcarusNavigationDirtier : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bTryDirtyOnTick;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bRegenerateOnDirty;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EDirtierMode DirtierMode;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bHasDirtied;  // 0x00B3, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TArray<UObject*> AffectedObjects;  // 0x00B8, size 0x10
    UPROPERTY(BlueprintAssignable) FPreDirtyNavmeshSignature OnPreDirtyNavmesh;  // 0x00C8, size 0x10
    UPROPERTY(BlueprintAssignable) FPostDirtyNavmeshSignature OnPostDirtyNavmesh;  // 0x00D8, size 0x10
    UPROPERTY(BlueprintReadOnly) AIcarusActor* IcarusActorOwner;  // 0x00E8, size 0x8

    UFUNCTION(BlueprintCallable) void AddAffectedObject(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearAffectedObjects();
    UFUNCTION(BlueprintCallable, BlueprintPure) AIcarusActor* GetOwningIcarusActor();  // parameters 0x8
    UFUNCTION() void OnPendingNavBuildAborted();
    UFUNCTION() void OnPendingNavBuildFinished(ANavigationData* NavData);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RemoveAffectedObject(UObject* Object);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetTryDirtyOnTick(bool bNewTryDirty);  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool TryDirtyNavmesh();  // parameters 0x1
};
