// /Game/BP/AI/GOAP/AI/BP_NPC_Alpha_Wolf_Character.BP_NPC_Alpha_Wolf_Character_C
// Derives from: ABP_IcarusNPCGOAPCharacter_C > AIcarusNPCGOAPCharacter > AIcarusNPCCharacter > AIcarusCharacter > ACharacter > APawn > AActor > UObject
// size 0xD03, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_NPC_Alpha_Wolf_Character_C : public ABP_IcarusNPCGOAPCharacter_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0CB8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInteractableComponent* Interactable;  // 0x0CC0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UInventoryComponent* Inventory;  // 0x0CC8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_UIProjectionLocation_C* BP_UIProjectionLocation;  // 0x0CD0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UMaterialBillboardComponent* EyeGlowR;  // 0x0CD8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UMaterialBillboardComponent* EyeGlowL;  // 0x0CE0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UGFurComponent* GFur;  // 0x0CE8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Alert;  // 0x0CF0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBP_HuntingClueSpawner_C* BP_HuntingClueSpawner;  // 0x0CF8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) EGOAPProperty FastestActiveState;  // 0x0D00, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) bool HasEmerged;  // 0x0D01, size 0x1
    UPROPERTY(EditAnywhere, SaveGame, BlueprintReadWrite) bool HasGeneratedRewards;  // 0x0D02, size 0x1

    UFUNCTION(BlueprintCallable) void Disable_Eye_Glow();  // named "Disable Eye Glow"
    UFUNCTION(BlueprintCallable) void Enable_Eye_Glow();  // named "Enable Eye Glow"
    UFUNCTION() void ExecuteUbergraph_BP_NPC_Alpha_Wolf_Character(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) void FindFloorAngle(float& Angle);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetAlertWidgetLocation(FVector& Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Interact(AActor* InstigatingActor);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Multicast_ActorDeath();
    UFUNCTION(BlueprintCallable) void OnRep_HasEmerged();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveTick(float DeltaSeconds);  // parameters 0x4
};
