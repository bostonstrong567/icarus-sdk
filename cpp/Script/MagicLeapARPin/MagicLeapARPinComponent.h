// /Script/MagicLeapARPin.MagicLeapARPinComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x3B0, declared in Engine/Plugins/Lumin/MagicLeapPassableWorld/Source/MagicLeapARPin/Public/MagicLeapARPinComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UMagicLeapARPinComponent : public USceneComponent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString ObjectUID;  // 0x01F8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 UserIndex;  // 0x0208, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMagicLeapAutoPinType AutoPinType;  // 0x020C, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bShouldPinActor;  // 0x020D, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<UMagicLeapARPinSaveGame> PinDataClass;  // 0x0210, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<EMagicLeapARPinType> SearchPinTypes;  // 0x0218, size 0x50
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USphereComponent* SearchVolume;  // 0x0268, size 0x8
    UPROPERTY(BlueprintAssignable) FPersistentEntityPinned OnPersistentEntityPinned;  // 0x0270, size 0x10
    UPROPERTY(BlueprintAssignable) FPersistentEntityPinLost OnPersistentEntityPinLost;  // 0x0280, size 0x10
    UPROPERTY(BlueprintAssignable) FMagicLeapARPinDataLoadAttemptCompleted OnPinDataLoadAttemptCompleted;  // 0x0290, size 0x10
    UPROPERTY() FGuid PinnedCFUID;  // 0x02A0, size 0x10
    UPROPERTY(Instanced) USceneComponent* PinnedSceneComponent;  // 0x02B0, size 0x8
    UPROPERTY() UMagicLeapARPinSaveGame* PinData;  // 0x02B8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FTransform OldComponentWorldTransform;  // 0x02C0, private
    FTransform OldCFUIDTransform;  // 0x02F0, private
    FTransform NewComponentWorldTransform;  // 0x0320, private
    FTransform NewCFUIDTransform;  // 0x0350, private
    bool bHasValidPin;  // 0x0380, private
    bool bDataRestored;  // 0x0381, private
    bool bAttemptedPinningAfterDataRestoration;  // 0x0382, private
    bool bPinFoundInEnvironmentPrevFrame;  // 0x0383, private
    TDelegate<void __cdecl(FString const &,int,bool),FDefaultDelegateUserPolicy> SaveGameDelegate;  // 0x0388, private
    TDelegate<void __cdecl(FString const &,int,USaveGame *),FDefaultDelegateUserPolicy> LoadGameDelegate;  // 0x0398, private

    UFUNCTION(BlueprintCallable) bool AttemptPinDataRestoration();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void AttemptPinDataRestorationAsync();
    UFUNCTION(BlueprintCallable) UMagicLeapARPinSaveGame* GetPinData(TSubclassOf<UMagicLeapARPinSaveGame> PinDataClass);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPinState(FMagicLeapARPinState& State) const;  // parameters 0x15
    UFUNCTION(BlueprintCallable, BlueprintPure) bool GetPinnedPinID(FGuid& PinID) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsPinned() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool PinActor(AActor* ActorToPin);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) bool PinRestoredOrSynced() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) bool PinSceneComponent(USceneComponent* ComponentToPin);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void PinToBestFit();
    UFUNCTION(BlueprintCallable) bool PinToID(const FGuid& PinID);  // parameters 0x11
    UFUNCTION(BlueprintCallable) bool PinToRestoredOrSyncedID();  // parameters 0x1
    UFUNCTION(BlueprintCallable) UMagicLeapARPinSaveGame* TryGetPinData(TSubclassOf<UMagicLeapARPinSaveGame> InPinDataClass, bool& OutPinDataValid);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void UnPin();
};
