// /Script/Icarus.FLODActorComponent
// Derives from: UActorComponent > UObject
// size 0x128, declared in Icarus/Source/Icarus/Systems/FLOD/FLODActorComponent.h

UCLASS(Config=Engine)
class UFLODActorComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) bool bSpawnedFromPool;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EFLODActorState CurrentFLODState;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsReservingInstance;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FFLODActorRecordInstance RecordInstance;  // 0x00B4, size 0x1C
    UPROPERTY(BlueprintAssignable) FOnActorRecordAssigned OnRecordInstanceAssigned;  // 0x00D0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnActorRevealing OnRevealing;  // 0x00E0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnActorReveal OnReveal;  // 0x00F0, size 0x10
    UPROPERTY(BlueprintAssignable) FOnActorConcealing OnConcealing;  // 0x0100, size 0x10
    UPROPERTY(BlueprintAssignable) FOnActorConceal OnConceal;  // 0x0110, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    UMaterialInterface * CurrentDebugMaterial;  // 0x0120

    UFUNCTION(BlueprintCallable) void Conceal();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ConcealImpl();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Concealing();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool ConcealingImpl();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void ReleaseInstance();
    UFUNCTION(BlueprintCallable) void ReserveInstance();
    UFUNCTION(BlueprintCallable) void Reveal(const FTransform& Transform);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool RevealImpl(const FTransform& Transform);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void Revealing(const FTransform& Transform);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) bool RevealingImpl(const FTransform& Transform);  // parameters 0x31

    // Virtual functions that start here:
    //   ConcealImpl_Implementation, ConcealingImpl_Implementation, RevealImpl_Implementation
    //   RevealingImpl_Implementation
};
