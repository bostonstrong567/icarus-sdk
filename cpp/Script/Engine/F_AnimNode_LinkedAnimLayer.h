// /Script/Engine.AnimNode_LinkedAnimLayer
// size 0xB0, declared in Engine/Source/Runtime/Engine/Classes/Animation/AnimNode_LinkedAnimLayer.h

USTRUCT()
struct FAnimNode_LinkedAnimLayer : public FAnimNode_LinkedAnimGraph
{
public:
    UPROPERTY() TSubclassOf<UAnimLayerInterface> Interface;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere) FName Layer;  // 0x00A8, size 0x8
};
