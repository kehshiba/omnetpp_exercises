

package networking;

//
// TODO auto-generated type
//
network Networking
{
    @display("bgb=403,145");
    types:
        simple Node
        {
            gates:
                input input_gate;
                output output_gate;
        }

    submodules:
        computer: Node;
        computer1: Node;
    connections:
        computer.output_gate --> computer1.input_gate;
        computer1.output_gate --> computer.input_gate;
}
