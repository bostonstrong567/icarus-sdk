// /Game/ASS/PRP/PRP_Dead_Prospector_01/BP_Dead_Prospector_Base.BP_Dead_Prospector_Base_C
// Derives from: ABP_ContainerBase_C > ABP_WorldObject_C > AIcarusActor > AActor > UObject
// size 0x340, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_Dead_Prospector_Base_C : public ABP_ContainerBase_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UFMODAudioComponent* DeadProspectorAudioLoop;  // 0x0338, size 0x8

    UFUNCTION(BlueprintCallable) void OnInteract();
    UFUNCTION(BlueprintCallable) void Play_Interact_Sound();  // named "Play Interact Sound"
};
