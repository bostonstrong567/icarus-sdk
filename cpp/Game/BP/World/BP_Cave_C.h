// /Game/BP/World/BP_Cave.BP_Cave_C
// Derives from: ACave > AActor > UObject
// size 0x388, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Cave_C : public ACave, public ICaveInterface
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UChildActorComponent* WT_CaveVoid;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBoxComponent* TriggerVolume;  // 0x0230, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_CaveEntranceComponent_C* Entrance;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName CollisionProfile;  // 0x0248, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UCurveFloat* EntranceDistanceCurve;  // 0x0250, size 0x8
    UPROPERTY(EditAnywhere, Transient, BlueprintReadWrite) bool Debug;  // 0x0258, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_CaveEntranceComponent_C*> Entrances;  // 0x0260, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> CachedLocations;  // 0x0270, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CaveUpdateTimerHandle;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float ActiveUpdateFrequency;  // 0x0288, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<UPrimitiveComponent*> LocalPlayerOverlaps;  // 0x0290, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float CaveVoidScale;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TMap<FString, FCaveVolumeCache> CachedVolumeCaches;  // 0x02E8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBoxComponent*> NewVolume;  // 0x0338, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> CachedVoidChildTransforms;  // 0x0348, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FTransform> CachedEntranceTransforms;  // 0x0358, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_CaveEntranceComponent_C*> EntranceRefs;  // 0x0368, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpelunkingDepth;  // 0x0378, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* LocalPlayerController;  // 0x0380, size 0x8

    UFUNCTION(BlueprintCallable) void CacheLocalPlayerController();
    UFUNCTION(BlueprintCallable) bool CacheValues();  // parameters 0x1
    UFUNCTION(BlueprintCallable) void CaveUpdate();
    UFUNCTION() void ExecuteUbergraph_BP_Cave(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetCurrentSpelunkingDepth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEntranceDepthForAtmos(FVector Location);  // parameters 0x10
    UFUNCTION(BlueprintCallable) float GetSpelunkingDepth(FVector Location) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintImplementableEvent) float GetSpelunkingDepthFromLocation(FVector Location) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) bool HasCacheChanged(TMap<FString, FCaveVolumeCache> NewCachedVolumeCaches, TArray<FTransform>& NewCachedVoidChildTransform, TArray<FTransform>& CachedEntranceTransform);  // parameters 0x71
    UFUNCTION(BlueprintCallable) void IsLocalPlayer(AActor* InActor, bool& Local);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void NewFunction_0();
    UFUNCTION(BlueprintCallable) void OnChildComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnChildComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlayerOverlapValidation();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Refresh();
    UFUNCTION(BlueprintCallable) void StartUpdateTimer();
    UFUNCTION(BlueprintCallable) void UpdateOverlapState();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
