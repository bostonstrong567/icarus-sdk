// /Script/Engine.ModelComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/Engine/Classes/Components/ModelComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UModelComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider
{
public:
    UPROPERTY() UBodySetup* ModelBodySetup;  // 0x0468, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    UModel * Model;  // 0x0458, private
    int32 ComponentIndex;  // 0x0460, private
    TArray<unsigned short,TSizedDefaultAllocator<32> > Nodes;  // 0x0470, private
    TIndirectArray<FModelElement,TSizedDefaultAllocator<32> > Elements;  // 0x0480, private
};
