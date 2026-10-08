// /Game/BP/Objects/World/Items/Resources/BP_StaticItem_HitchingRope.BP_StaticItem_HitchingRope_C
// Derives from: AStaticItem > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x5A8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_StaticItem_HitchingRope_C : public AStaticItem
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0580, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) ACharacter* LinkedCharacter;  // 0x0588, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) AActor* LinkedHitchingPost;  // 0x0590, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EMountMovementBehaviourState InitialMovementState;  // 0x0598, size 0x1
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UCableComponent* CableComponent;  // 0x05A0, size 0x8

    UFUNCTION(BlueprintCallable) void AddCableComponent();
    UFUNCTION() void ExecuteUbergraph_BP_StaticItem_HitchingRope(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLinkedCharacter(ACharacter*& LinkedCharacter) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) void GetLinkedHitchingPost(AActor*& LinkedHitchingPost) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnRep_LinkedCharacter();
    UFUNCTION(BlueprintCallable) void OnRep_LinkedHitchingPost();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveEndPlay(TEnumAsByte<EEndPlayReason> EndPlayReason);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ResetRope();
    UFUNCTION(BlueprintCallable) void SetLinkedCharacter(ACharacter* LinkedCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetLinkedHitchingPost(AActor* LinkedHitchingPost);  // parameters 0x8
};
