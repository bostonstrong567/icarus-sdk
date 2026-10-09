// /Script/Engine.ModelComponent
// Derives from: UPrimitiveComponent > USceneComponent > UActorComponent > UObject
// size 0x490, declared in Engine/Source/Runtime/Engine/Classes/Components/ModelComponent.h

UCLASS(MinimalAPI, Config=Engine)
class UModelComponent : public UPrimitiveComponent, public IInterface_CollisionDataProvider
{
public:
    UPROPERTY() UBodySetup* ModelBodySetup;  // 0x0468, size 0x8
private:
    UModel * Model;  // 0x0458, not reflected
    int32 ComponentIndex;  // 0x0460, not reflected
    TArray<unsigned short,TSizedDefaultAllocator<32> > Nodes;  // 0x0470, not reflected
    TIndirectArray<FModelElement,TSizedDefaultAllocator<32> > Elements;  // 0x0480, not reflected
};
