// /Script/ControlRig.ControlRigSequencerAnimInstanceProxy
// size 0xCC0, declared in Engine/Plugins/Experimental/ControlRig/Source/ControlRig/Private/Sequencer/ControlRigSequencerAnimInstanceProxy.h

USTRUCT()
struct FControlRigSequencerAnimInstanceProxy : public FAnimSequencerInstanceProxy
{

    // Not reflected:
    FAnimNode_LayeredBoneBlend LayeredBoneBlendNode;  // 0x0A10
    FAnimNode_LayeredBoneBlend AdditiveLayeredBoneBlendNode;  // 0x0AD0
    FAnimNode_BlendListByBool BoolBlendNode;  // 0x0B90
    FAnimNode_SequencePlayer PreviewPlayerNode;  // 0x0C30
    bool bLayeredBlendChanged;  // 0x0CB0
    bool bAdditiveLayeredBlendChanged;  // 0x0CB1
};
