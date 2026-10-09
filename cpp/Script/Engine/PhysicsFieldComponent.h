// /Script/Engine.PhysicsFieldComponent
// Derives from: USceneComponent > UActorComponent > UObject
// size 0x270, declared in Engine/Source/Runtime/Engine/Classes/PhysicsField/PhysicsFieldComponent.h

UCLASS(Config=Engine)
class UPhysicsFieldComponent : public USceneComponent
{
public:
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> >[3] TransientCommands;  // 0x01F8, not reflected
    TArray<FFieldSystemCommand,TSizedDefaultAllocator<32> >[3] PersistentCommands;  // 0x0228, not reflected
    FPhysicsFieldInstance * FieldInstance;  // 0x0258, not reflected
    FPhysicsFieldSceneProxy * FieldProxy;  // 0x0260, not reflected
};
