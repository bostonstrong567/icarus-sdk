// /Game/BP/Objects/World/Items/Deployables/Decorations/BP_Stone_Cairn.BP_Stone_Cairn_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x778, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Stone_Cairn_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0728, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0730, size 0x8
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) FText Title;  // 0x0738, size 0x18
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, SaveGame, BlueprintReadWrite) FText Text;  // 0x0750, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FTextUpdated TextUpdated;  // 0x0768, size 0x10

    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void AddBodyAudio();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_BP_Stone_Cairn(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetWidgetClass(TSubclassOf<UUserWidget>& Widget);  // parameters 0x8
    UFUNCTION() void ItemAdded(UInventory* Inventory, int32 Location);  // parameters 0xC
    UFUNCTION(BlueprintCallable) void OnRep_Text();
    UFUNCTION(BlueprintCallable) void OnRep_Title();
    UFUNCTION(BlueprintImplementableEvent) void ReceiveBeginPlay();
    UFUNCTION(BlueprintCallable) void SetStatus(FText Title, FText Text);  // parameters 0x30
    UFUNCTION(BlueprintCallable) void TextUpdated__DelegateSignature(FString Title, FString Text);  // parameters 0x20
};
