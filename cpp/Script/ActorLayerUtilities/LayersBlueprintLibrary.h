// /Script/ActorLayerUtilities.LayersBlueprintLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Plugins/Runtime/ActorLayerUtilities/Source/ActorLayerUtilities/Public/ActorLayerUtilities.h

UCLASS()
class ULayersBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddActorToLayer(AActor* InActor, const FActorLayer& Layer);  // parameters 0x10
    UFUNCTION(BlueprintCallable) static TArray<AActor*> GetActors(UObject* WorldContextObject, const FActorLayer& ActorLayer);  // parameters 0x20
    UFUNCTION(BlueprintCallable) static void RemoveActorFromLayer(AActor* InActor, const FActorLayer& Layer);  // parameters 0x10
};
