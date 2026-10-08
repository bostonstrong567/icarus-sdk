// /Game/BP/Objects/World/Items/Deployables/Notes/BP_Note.BP_Note_C
// Derives from: ABP_DeployableBase_C > ADeployable > AIcarusItem > AIcarusActor > AActor > UObject
// size 0x740, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Note_C : public ABP_DeployableBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UNiagaraComponent* NS_Sprites;  // 0x0728, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Note_Open_Audio;  // 0x0730, size 0x8, named "Note Open Audio"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UFMODEvent* Note_Close_Audio;  // 0x0738, size 0x8, named "Note Close Audio"

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_Interact(AActor* Interactor);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void Deployable_StopInteract(AActor* Interactor);  // parameters 0x8
};
