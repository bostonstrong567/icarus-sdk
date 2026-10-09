// /Script/Engine.PrimitiveMaterialRef
// size 0x18, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FPrimitiveMaterialRef
{
public:
    UPROPERTY(Instanced) UPrimitiveComponent* Primitive;  // 0x0000, size 0x8
    UPROPERTY(Instanced) UDecalComponent* Decal;  // 0x0008, size 0x8
    UPROPERTY() int32 ElementIndex;  // 0x0010, size 0x4
};
