// /Script/Engine.TriggerBase
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Source/Runtime/Engine/Classes/Engine/TriggerBase.h

UCLASS(Abstract, MinimalAPI, Config=Engine)
class ATriggerBase : public AActor
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
private:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UShapeComponent* CollisionComponent;  // 0x0220, size 0x8
};
