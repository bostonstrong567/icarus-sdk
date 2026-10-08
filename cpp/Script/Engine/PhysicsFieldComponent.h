// /Script/Engine.PhysicsFieldComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h

UCLASS(Config=Engine)
class UPhysicsFieldComponent : public USceneComponent
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> >[3] TransientCommands;  // 0x01F8
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> >[3] PersistentCommands;  // 0x0228
    FPhysicsFieldInstance * FieldInstance;  // 0x0258
    FPhysicsFieldSceneProxy * FieldProxy;  // 0x0260
};
