// /Game/BP/World/CaveTemplates/BP_CaveComponent.BP_CaveComponent_C
// Derives from: UActorComponent > UObject
// size 0x158, a blueprint class, blueprint

UCLASS(Config=Engine)
class UBP_CaveComponent_C : public UActorComponent
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x00B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBoxComponent*> Volumes;  // 0x00B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UBP_CaveEntranceComponent_C*> Entrances;  // 0x00C8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ActiveUpdateFrequency;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FTimerHandle CaveUpdateTimerHandle;  // 0x00E0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AIcarusPlayerController* Player;  // 0x00E8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float SpelunkingDepth;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSet<UPrimitiveComponent*> LocalPlayerOverlaps;  // 0x00F8, size 0x50
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Debug;  // 0x0148, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AController* LocalPlayerController;  // 0x0150, size 0x8

    UFUNCTION(BlueprintCallable) void CacheLocalPlayerController();
    UFUNCTION(BlueprintCallable) void CaveUpdate();
    UFUNCTION(BlueprintCallable) void CustomEvent(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_CaveComponent(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetEntranceDepthForAtmos(FVector Location);  // parameters 0x10
    UFUNCTION(BlueprintCallable) float GetSpelunkingDepth(FVector Location) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable) void InitCave(TArray<UBoxComponent*>& InVolumes, TArray<UBP_CaveEntranceComponent_C*>& InEntrances);  // parameters 0x20
    UFUNCTION(BlueprintCallable) void IsLocalPlayer(AActor* InActor, bool& Local);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void OnChildComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);  // parameters 0xA8
    UFUNCTION(BlueprintCallable) void OnChildComponentEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void PlayerOverlapValidation();
    UFUNCTION(BlueprintCallable) void StartUpdateTimer();
    UFUNCTION(BlueprintCallable) void UpdateOverlapState();
};
